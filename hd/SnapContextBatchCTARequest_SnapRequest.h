//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SnapContextInfo, SnapContextSnapIdentity, SnapContextViewerContentInfo, SnapContextViewerCreatorInfo;

@interface SnapContextBatchCTARequest_SnapRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SnapContextInfo *additionalInfo; // @dynamic additionalInfo;
@property(nonatomic) _Bool canReplyViaChat; // @dynamic canReplyViaChat;
@property(nonatomic) _Bool hasAdditionalInfo; // @dynamic hasAdditionalInfo;
@property(nonatomic) _Bool hasSnapIdentity; // @dynamic hasSnapIdentity;
@property(nonatomic) _Bool hasViewerContentInfo; // @dynamic hasViewerContentInfo;
@property(nonatomic) _Bool hasViewerCreatorInfo; // @dynamic hasViewerCreatorInfo;
@property(copy, nonatomic) NSString *snapId; // @dynamic snapId;
@property(retain, nonatomic) SnapContextSnapIdentity *snapIdentity; // @dynamic snapIdentity;
@property(retain, nonatomic) SnapContextViewerContentInfo *viewerContentInfo; // @dynamic viewerContentInfo;
@property(retain, nonatomic) SnapContextViewerCreatorInfo *viewerCreatorInfo; // @dynamic viewerCreatorInfo;

@end

