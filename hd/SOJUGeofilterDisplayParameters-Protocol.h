//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString, SOJUTextShadowParameters;

@protocol SOJUGeofilterDisplayParameters <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *fallbackMethod;
@property(readonly, copy, nonatomic) NSString *calculatedDynamicText;
@property(readonly, copy, nonatomic) NSString *capitalization;
@property(readonly, copy, nonatomic) NSString *targetDatetimeDirection;
@property(readonly, copy, nonatomic) NSString *targetDatetime;
@property(readonly, copy, nonatomic) NSString *dynamicText;
@property(readonly, copy, nonatomic) NSNumber *maxFontSize;
@property(readonly, copy, nonatomic) NSString *fallbackText;
@property(readonly, copy, nonatomic) NSNumber *autoResizeEnabled;
@property(readonly, copy, nonatomic) SOJUTextShadowParameters *textShadow;
@property(readonly, copy, nonatomic) NSNumber *textAlpha;
@property(readonly, copy, nonatomic) NSString *align;
@property(readonly, copy, nonatomic) NSString *staticText;
@property(readonly, copy, nonatomic) NSString *font;
@property(readonly, copy, nonatomic) NSString *color;
@property(readonly, copy, nonatomic) NSNumber *size;
@end
