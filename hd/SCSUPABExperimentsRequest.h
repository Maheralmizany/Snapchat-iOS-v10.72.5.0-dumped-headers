//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCSUPABExperimentsRequest_AppInfo;

@interface SCSUPABExperimentsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSUPABExperimentsRequest_AppInfo *appInfo; // @dynamic appInfo;
@property(nonatomic) _Bool forceRefresh; // @dynamic forceRefresh;
@property(nonatomic) _Bool hasAppInfo; // @dynamic hasAppInfo;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSMutableArray *studyIdsArray; // @dynamic studyIdsArray;
@property(readonly, nonatomic) unsigned long long studyIdsArray_Count; // @dynamic studyIdsArray_Count;

@end

