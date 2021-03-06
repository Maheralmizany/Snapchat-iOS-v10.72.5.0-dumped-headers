//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SnapContextInfo, SnapContextSnapIdentity, SnapContextViewerContentInfo, SnapContextViewerCreatorInfo;

@interface SCCTXCTARequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool canReplyViaChat; // @dynamic canReplyViaChat;
@property(retain, nonatomic) SnapContextInfo *contextInfo; // @dynamic contextInfo;
@property(nonatomic) _Bool hasContextInfo; // @dynamic hasContextInfo;
@property(nonatomic) _Bool hasSnapIdentity; // @dynamic hasSnapIdentity;
@property(nonatomic) _Bool hasViewerContentInfo; // @dynamic hasViewerContentInfo;
@property(nonatomic) _Bool hasViewerCreatorInfo; // @dynamic hasViewerCreatorInfo;
@property(copy, nonatomic) NSString *snapId; // @dynamic snapId;
@property(retain, nonatomic) SnapContextSnapIdentity *snapIdentity; // @dynamic snapIdentity;
@property(retain, nonatomic) SnapContextViewerContentInfo *viewerContentInfo; // @dynamic viewerContentInfo;
@property(retain, nonatomic) SnapContextViewerCreatorInfo *viewerCreatorInfo; // @dynamic viewerCreatorInfo;
@property(nonatomic) _Bool withPostSnapActions; // @dynamic withPostSnapActions;

@end

