//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTV3ActiveConversationInfo.h"

@class NSString, TCV3ActiveConversationInfo;

@interface SCTV3ActiveConversationInfo : NSObject <SCTV3ActiveConversationInfo>
{
    TCV3ActiveConversationInfo *_core;
}

- (void).cxx_destruct;
- (id)cognacParticipants;
- (id)typingParticipants;
- (id)callParticipants;
- (unsigned long long)callMedia;
- (id)caller;
- (_Bool)isCalling;
- (id)initWithCore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
