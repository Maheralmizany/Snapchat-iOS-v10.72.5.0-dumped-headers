//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCVSDeviceData, SCVSLocationUpdate, SCVSViewportUpdate;

@interface SCVSClientUpdate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCVSDeviceData *deviceDataUpdate; // @dynamic deviceDataUpdate;
@property(retain, nonatomic) SCVSLocationUpdate *locationUpdate; // @dynamic locationUpdate;
@property(readonly, nonatomic) int messageOneOfCase; // @dynamic messageOneOfCase;
@property(retain, nonatomic) SCVSViewportUpdate *viewportUpdate; // @dynamic viewportUpdate;

@end

