//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSDate, NSString, UIColor;

@protocol SCOnDemandGeofilterSetTimeTableViewCellViewModel <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) _Bool didSelectDate;
@property(readonly, nonatomic) _Bool selected;
@property(readonly, copy, nonatomic) UIColor *dateStatusColor;
@property(readonly, copy, nonatomic) NSDate *datePickerEndDate;
@property(readonly, copy, nonatomic) NSDate *datePickerStartDate;
@property(readonly, copy, nonatomic) NSDate *selectDate;
@property(readonly, copy, nonatomic) NSString *title;
@end

