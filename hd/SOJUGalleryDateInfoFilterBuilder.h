//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUGalleryDateInfoFilterBuilder : NSObject
{
    NSString *_type;
    NSNumber *_time;
    NSString *_timeZone;
}

+ (id)withJUGalleryDateInfoFilter:(id)arg1;
- (void).cxx_destruct;
- (id)setTimeZone:(id)arg1;
- (id)setTime:(id)arg1;
- (id)setType:(id)arg1;
- (id)build;
- (id)setTimeValue:(long long)arg1;
- (id)setTypeEnum:(long long)arg1;

@end

