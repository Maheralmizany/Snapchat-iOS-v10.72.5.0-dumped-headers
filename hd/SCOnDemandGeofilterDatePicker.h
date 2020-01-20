//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSCalendar, NSDate, NSString, UIPickerView;

@interface SCOnDemandGeofilterDatePicker : UIControl <UIPickerViewDataSource, UIPickerViewDelegate>
{
    NSDate *_earliestPresentedDate;
    UIPickerView *_pickerView;
    NSCalendar *_calendar;
    id <SCOnDemandGeofilterDatePickerDelegate> _datePickerDelegate;
    NSDate *_date;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
}

+ (id)nextRoundHour:(id)arg1;
+ (id)dateByHoursFromNow:(long long)arg1;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) __weak id <SCOnDemandGeofilterDatePickerDelegate> datePickerDelegate; // @synthesize datePickerDelegate=_datePickerDelegate;
- (void).cxx_destruct;
- (long long)_daysBetweenDate:(id)arg1 andDate:(id)arg2;
- (id)_toComponents:(id)arg1;
- (_Bool)_regularizeDate:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)reloadDayComponent;
- (void)selectDate:(id)arg1;
- (void)selectRowsForDay:(long long)arg1 Hour:(long long)arg2 Meridiem:(long long)arg3 animated:(_Bool)arg4;
- (long long)rollNumber:(long long)arg1 toReminder:(long long)arg2 modulo:(long long)arg3 inTheDirection:(long long)arg4;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

