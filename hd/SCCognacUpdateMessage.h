//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCognacCloseMessage, SCCognacLaunchMessage, SCCognacTerminateMessage;

@interface SCCognacUpdateMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appIconURL; // @dynamic appIconURL;
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(copy, nonatomic) NSString *appInstanceId; // @dynamic appInstanceId;
@property(copy, nonatomic) NSString *appName; // @dynamic appName;
@property(retain, nonatomic) SCCognacCloseMessage *closeMessage; // @dynamic closeMessage;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) SCCognacLaunchMessage *launchMessage; // @dynamic launchMessage;
@property(readonly, nonatomic) int messageOneOfCase; // @dynamic messageOneOfCase;
@property(retain, nonatomic) SCCognacTerminateMessage *terminateMessage; // @dynamic terminateMessage;

@end
