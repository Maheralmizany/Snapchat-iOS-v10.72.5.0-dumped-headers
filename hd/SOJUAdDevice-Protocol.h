//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString;

@protocol SOJUAdDevice <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *buildNumber;
@property(readonly, copy, nonatomic) NSString *deviceLanguage;
@property(readonly, copy, nonatomic) NSNumber *osVersionNumeric;
@property(readonly, copy, nonatomic) NSString *deviceModel;
@property(readonly, copy, nonatomic) NSString *platformType;
@property(readonly, copy, nonatomic) NSString *idfa;
@end
