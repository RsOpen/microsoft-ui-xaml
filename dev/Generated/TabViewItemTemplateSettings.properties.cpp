// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "TabViewItemTemplateSettings.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(TabViewItemTemplateSettings)
}

#include "TabViewItemTemplateSettings.g.cpp"

GlobalDependencyProperty TabViewItemTemplateSettingsProperties::s_IconElementProperty{ nullptr };
GlobalDependencyProperty TabViewItemTemplateSettingsProperties::s_LeftInsetRadiusMarginProperty{ nullptr };
GlobalDependencyProperty TabViewItemTemplateSettingsProperties::s_RightInsetRadiusMarginProperty{ nullptr };

TabViewItemTemplateSettingsProperties::TabViewItemTemplateSettingsProperties()
{
    EnsureProperties();
}

void TabViewItemTemplateSettingsProperties::EnsureProperties()
{
    if (!s_IconElementProperty)
    {
        s_IconElementProperty =
            InitializeDependencyProperty(
                L"IconElement",
                winrt::name_of<winrt::IconElement>(),
                winrt::name_of<winrt::TabViewItemTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::IconElement>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_LeftInsetRadiusMarginProperty)
    {
        s_LeftInsetRadiusMarginProperty =
            InitializeDependencyProperty(
                L"LeftInsetRadiusMargin",
                winrt::name_of<winrt::Thickness>(),
                winrt::name_of<winrt::TabViewItemTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::Thickness>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_RightInsetRadiusMarginProperty)
    {
        s_RightInsetRadiusMarginProperty =
            InitializeDependencyProperty(
                L"RightInsetRadiusMargin",
                winrt::name_of<winrt::Thickness>(),
                winrt::name_of<winrt::TabViewItemTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::Thickness>::BoxedDefaultValue(),
                nullptr);
    }
}

void TabViewItemTemplateSettingsProperties::ClearProperties()
{
    s_IconElementProperty = nullptr;
    s_LeftInsetRadiusMarginProperty = nullptr;
    s_RightInsetRadiusMarginProperty = nullptr;
}

void TabViewItemTemplateSettingsProperties::IconElement(winrt::IconElement const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<TabViewItemTemplateSettings*>(this)->SetValue(s_IconElementProperty, ValueHelper<winrt::IconElement>::BoxValueIfNecessary(value));
    }
}

winrt::IconElement TabViewItemTemplateSettingsProperties::IconElement()
{
    return ValueHelper<winrt::IconElement>::CastOrUnbox(static_cast<TabViewItemTemplateSettings*>(this)->GetValue(s_IconElementProperty));
}

void TabViewItemTemplateSettingsProperties::LeftInsetRadiusMargin(winrt::Thickness const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<TabViewItemTemplateSettings*>(this)->SetValue(s_LeftInsetRadiusMarginProperty, ValueHelper<winrt::Thickness>::BoxValueIfNecessary(value));
    }
}

winrt::Thickness TabViewItemTemplateSettingsProperties::LeftInsetRadiusMargin()
{
    return ValueHelper<winrt::Thickness>::CastOrUnbox(static_cast<TabViewItemTemplateSettings*>(this)->GetValue(s_LeftInsetRadiusMarginProperty));
}

void TabViewItemTemplateSettingsProperties::RightInsetRadiusMargin(winrt::Thickness const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<TabViewItemTemplateSettings*>(this)->SetValue(s_RightInsetRadiusMarginProperty, ValueHelper<winrt::Thickness>::BoxValueIfNecessary(value));
    }
}

winrt::Thickness TabViewItemTemplateSettingsProperties::RightInsetRadiusMargin()
{
    return ValueHelper<winrt::Thickness>::CastOrUnbox(static_cast<TabViewItemTemplateSettings*>(this)->GetValue(s_RightInsetRadiusMarginProperty));
}
