//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUSupportToolsShakeTicketOtherInfo <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *lastCrashId;
@property(readonly, copy, nonatomic) NSString *arroyoMode;
@property(readonly, copy, nonatomic) NSNumber *isFromMushroom;
@property(readonly, copy, nonatomic) NSArray *cameraRollAttachmentsFileNames;
@property(readonly, copy, nonatomic) NSNumber *hasCameraRollAttachment;
@property(readonly, copy, nonatomic) NSNumber *hasVideoAttached;
@property(readonly, copy, nonatomic) NSNumber *hasScreenCaptured;
@property(readonly, copy, nonatomic) NSString *tweaksInfo;
@property(readonly, copy, nonatomic) NSString *jiraMetaInfo;
@property(readonly, copy, nonatomic) NSString *sourceScreenFeatureTeam;
@property(readonly, copy, nonatomic) NSString *sourceScreen;
@property(readonly, copy, nonatomic) NSArray *options;
@property(readonly, copy, nonatomic) NSNumber *isAutoTicket;
@end

