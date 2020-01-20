//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUAirReportOption;

@protocol SOJUAirAirRequest <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *deviceId;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *appLastChangeCommitHash;
@property(readonly, copy, nonatomic) NSString *reportSource;
@property(readonly, copy, nonatomic) NSString *blobData;
@property(readonly, copy, nonatomic) NSNumber *freeMemory;
@property(readonly, copy, nonatomic) NSNumber *appUsedMemory;
@property(readonly, copy, nonatomic) NSArray *notificationEmails;
@property(readonly, copy, nonatomic) SOJUAirReportOption *reportOption;
@property(readonly, copy, nonatomic) NSString *otherInfo;
@property(readonly, copy, nonatomic) NSNumber *deviceScore;
@property(readonly, copy, nonatomic) NSString *shakeSensitivity;
@property(readonly, copy, nonatomic) NSNumber *bandwidth;
@property(readonly, copy, nonatomic) NSString *connectionType;
@property(readonly, copy, nonatomic) NSString *subFeature;
@property(readonly, copy, nonatomic) NSString *feature;
@property(readonly, copy, nonatomic) NSString *descriptionValue;
@property(readonly, copy, nonatomic) NSString *reportType;
@property(readonly, copy, nonatomic) NSString *idValue;
@end
