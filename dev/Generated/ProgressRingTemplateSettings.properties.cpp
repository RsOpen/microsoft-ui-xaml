// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ProgressRingTemplateSettings.h"

GlobalDependencyProperty ProgressRingTemplateSettingsProperties::s_DispatcherProperty{ nullptr };
GlobalDependencyProperty ProgressRingTemplateSettingsProperties::s_EllipseDiameterProperty{ nullptr };
GlobalDependencyProperty ProgressRingTemplateSettingsProperties::s_EllipseOffsetProperty{ nullptr };
GlobalDependencyProperty ProgressRingTemplateSettingsProperties::s_MaxSideLengthProperty{ nullptr };

ProgressRingTemplateSettingsProperties::ProgressRingTemplateSettingsProperties()
{
    EnsureProperties();
}

void ProgressRingTemplateSettingsProperties::EnsureProperties()
{
    if (!s_DispatcherProperty)
    {
        s_DispatcherProperty =
            InitializeDependencyProperty(
                L"Dispatcher",
                winrt::name_of<winrt::CoreDispatcher>(),
                winrt::name_of<winrt::ProgressRingTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::CoreDispatcher>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_EllipseDiameterProperty)
    {
        s_EllipseDiameterProperty =
            InitializeDependencyProperty(
                L"EllipseDiameter",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ProgressRingTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_EllipseOffsetProperty)
    {
        s_EllipseOffsetProperty =
            InitializeDependencyProperty(
                L"EllipseOffset",
                winrt::name_of<winrt::Thickness>(),
                winrt::name_of<winrt::ProgressRingTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::Thickness>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_MaxSideLengthProperty)
    {
        s_MaxSideLengthProperty =
            InitializeDependencyProperty(
                L"MaxSideLength",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ProgressRingTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
}

void ProgressRingTemplateSettingsProperties::ClearProperties()
{
    s_DispatcherProperty = nullptr;
    s_EllipseDiameterProperty = nullptr;
    s_EllipseOffsetProperty = nullptr;
    s_MaxSideLengthProperty = nullptr;
}

void ProgressRingTemplateSettingsProperties::Dispatcher(winrt::CoreDispatcher const& value)
{
    static_cast<ProgressRingTemplateSettings*>(this)->SetValue(s_DispatcherProperty, ValueHelper<winrt::CoreDispatcher>::BoxValueIfNecessary(value));
}

winrt::CoreDispatcher ProgressRingTemplateSettingsProperties::Dispatcher()
{
    return ValueHelper<winrt::CoreDispatcher>::CastOrUnbox(static_cast<ProgressRingTemplateSettings*>(this)->GetValue(s_DispatcherProperty));
}

void ProgressRingTemplateSettingsProperties::EllipseDiameter(double value)
{
    static_cast<ProgressRingTemplateSettings*>(this)->SetValue(s_EllipseDiameterProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ProgressRingTemplateSettingsProperties::EllipseDiameter()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ProgressRingTemplateSettings*>(this)->GetValue(s_EllipseDiameterProperty));
}

void ProgressRingTemplateSettingsProperties::EllipseOffset(winrt::Thickness const& value)
{
    static_cast<ProgressRingTemplateSettings*>(this)->SetValue(s_EllipseOffsetProperty, ValueHelper<winrt::Thickness>::BoxValueIfNecessary(value));
}

winrt::Thickness ProgressRingTemplateSettingsProperties::EllipseOffset()
{
    return ValueHelper<winrt::Thickness>::CastOrUnbox(static_cast<ProgressRingTemplateSettings*>(this)->GetValue(s_EllipseOffsetProperty));
}

void ProgressRingTemplateSettingsProperties::MaxSideLength(double value)
{
    static_cast<ProgressRingTemplateSettings*>(this)->SetValue(s_MaxSideLengthProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ProgressRingTemplateSettingsProperties::MaxSideLength()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ProgressRingTemplateSettings*>(this)->GetValue(s_MaxSideLengthProperty));
}