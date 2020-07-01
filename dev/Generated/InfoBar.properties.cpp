// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "InfoBar.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(InfoBar)
}

#include "InfoBar.g.cpp"

GlobalDependencyProperty InfoBarProperties::s_PlaceholderProperty{ nullptr };

InfoBarProperties::InfoBarProperties()
{
    EnsureProperties();
}

void InfoBarProperties::EnsureProperties()
{
    if (!s_PlaceholderProperty)
    {
        s_PlaceholderProperty =
            InitializeDependencyProperty(
                L"Placeholder",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::InfoBar>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPlaceholderPropertyChanged));
    }
}

void InfoBarProperties::ClearProperties()
{
    s_PlaceholderProperty = nullptr;
}

void InfoBarProperties::OnPlaceholderPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::InfoBar>();
    winrt::get_self<InfoBar>(owner)->OnPropertyChanged(args);
}

void InfoBarProperties::Placeholder(winrt::IInspectable const& value)
{
    static_cast<InfoBar*>(this)->SetValue(s_PlaceholderProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable InfoBarProperties::Placeholder()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<InfoBar*>(this)->GetValue(s_PlaceholderProperty));
}