//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMEExplorerStatusModel;

@interface SCMEAddExplorerStatusRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStatusModel; // @dynamic hasStatusModel;
@property(retain, nonatomic) SCMEExplorerStatusModel *statusModel; // @dynamic statusModel;

@end
