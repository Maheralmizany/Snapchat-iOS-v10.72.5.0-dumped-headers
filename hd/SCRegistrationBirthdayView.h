//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCDatePickerDelegate.h"

@class SCDatePicker, SCRegistrationBirthdayViewModel, SCScreen, SCTextView, SCUnauthenticatedBaseView, UILabel;

@interface SCRegistrationBirthdayView : UIView <SCDatePickerDelegate>
{
    SCScreen *_screen;
    SCRegistrationBirthdayViewModel *_viewModel;
    id <SCUnauthenticatedStyleHelper> _styleHelper;
    SCUnauthenticatedBaseView *_baseView;
    UIView *_containerView;
    struct UIEdgeInsets _horizontalInsets;
    SCDatePicker *_agePickerView;
    UILabel *_titleLabel;
    UILabel *_birthdayLabel;
    SCTextView *_birthdayTextView;
}

- (void).cxx_destruct;
- (void)setActivityAnimating:(_Bool)arg1;
- (void)showUserUnderageError;
- (void)showAgePicker;
- (_Bool)becomeFirstResponder;
- (void)dateDidChange;
- (void)dateWheelIsSpinning;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)continueButtonTapped;
- (void)backButtonTapped;
- (void)initContainerView;
- (void)initAgePickerView;
- (void)initBirthdayField;
- (void)initBirthdayLabel;
- (void)initBirthdayTitle;
- (void)_initSubviews;
- (void)_update:(id)arg1;
- (void)_startRenderingViewModels;
- (id)initWithScreen:(id)arg1 styleHelper:(id)arg2;

@end

