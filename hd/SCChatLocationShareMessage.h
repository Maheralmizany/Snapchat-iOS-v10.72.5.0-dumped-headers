//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCChatLocationShareMessage : NSObject
{
    NSString *_senderUserId;
    NSString *_recipientUserId;
    NSString *_groupId;
    unsigned long long _userResponse;
    struct CLLocationCoordinate2D _embeddedLocation;
}

@property(readonly, nonatomic) unsigned long long userResponse; // @synthesize userResponse=_userResponse;
@property(readonly, nonatomic) struct CLLocationCoordinate2D embeddedLocation; // @synthesize embeddedLocation=_embeddedLocation;
@property(readonly, copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(readonly, copy, nonatomic) NSString *recipientUserId; // @synthesize recipientUserId=_recipientUserId;
@property(readonly, copy, nonatomic) NSString *senderUserId; // @synthesize senderUserId=_senderUserId;
- (void).cxx_destruct;
- (id)serializedAsJson;
- (id)initWithJson:(id)arg1;
- (id)initWithSenderUserId:(id)arg1 recipientUserId:(id)arg2 groupId:(id)arg3 embeddedLocation:(struct CLLocationCoordinate2D)arg4 userResponse:(unsigned long long)arg5;

@end

