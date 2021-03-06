//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSearchIntent.h"

@class NSString, SCSearchMiniProfileExtraLoggingData;

@interface SCSearchGroupMiniProfileIntent : NSObject <SCSearchIntent>
{
    id <SCChatGroup> _group;
    NSString *_groupId;
    SCSearchMiniProfileExtraLoggingData *_loggingData;
    CDUnknownBlockType _callbackBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(readonly, nonatomic) SCSearchMiniProfileExtraLoggingData *loggingData; // @synthesize loggingData=_loggingData;
@property(readonly, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) id <SCChatGroup> group; // @synthesize group=_group;
- (void).cxx_destruct;
- (id)initWithGroupId:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2 loggingData:(id)arg3;
- (id)initWithGroup:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2 loggingData:(id)arg3;
- (id)initWithGroup:(id)arg1 loggingData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

