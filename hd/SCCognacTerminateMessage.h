//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCCognacAppInstancesChatDock, SCCognacAppInstancesChatDockEntry;

@interface SCCognacTerminateMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCCognacAppInstancesChatDock *chatDock; // @dynamic chatDock;
@property(nonatomic) _Bool hasChatDock; // @dynamic hasChatDock;
@property(nonatomic) _Bool hasTerminatedChatDockEntry; // @dynamic hasTerminatedChatDockEntry;
@property(retain, nonatomic) SCCognacAppInstancesChatDockEntry *terminatedChatDockEntry; // @dynamic terminatedChatDockEntry;

@end

