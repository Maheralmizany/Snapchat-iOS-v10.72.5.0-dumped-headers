//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCIDAndroidNotificationPermissionsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *notificationChannelGroupsArray; // @dynamic notificationChannelGroupsArray;
@property(readonly, nonatomic) unsigned long long notificationChannelGroupsArray_Count; // @dynamic notificationChannelGroupsArray_Count;
@property(retain, nonatomic) NSMutableArray *notificationChannelsArray; // @dynamic notificationChannelsArray;
@property(readonly, nonatomic) unsigned long long notificationChannelsArray_Count; // @dynamic notificationChannelsArray_Count;

@end

