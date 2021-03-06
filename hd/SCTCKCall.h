//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSUUID, SCAppNotification;

@interface SCTCKCall : NSObject
{
    _Bool _muted;
    _Bool _chatNavigationNeeded;
    NSUUID *_uuid;
    NSString *_convoId;
    NSDate *_callStartTime;
    SCAppNotification *_notification;
    unsigned long long _media;
}

@property(nonatomic) _Bool chatNavigationNeeded; // @synthesize chatNavigationNeeded=_chatNavigationNeeded;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) unsigned long long media; // @synthesize media=_media;
@property(retain, nonatomic) SCAppNotification *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) NSDate *callStartTime; // @synthesize callStartTime=_callStartTime;
@property(readonly, copy, nonatomic) NSString *convoId; // @synthesize convoId=_convoId;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUUID:(id)arg1 notification:(id)arg2 convoId:(id)arg3;
- (id)initWithConvoId:(id)arg1;
- (id)createSetMutedCallAction:(_Bool)arg1;
- (id)createEndCallAction;
- (id)createStartCallActionWithVideo:(_Bool)arg1;
- (id)createCallHandle;

@end

