//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class VLKMediaFileDeletionLogicRequest, VLKMediaFileTransferRequest;

@interface VLKMediaRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMediaFileDeletionLogicRequest; // @dynamic hasMediaFileDeletionLogicRequest;
@property(nonatomic) _Bool hasMediaFileTransferRequest; // @dynamic hasMediaFileTransferRequest;
@property(nonatomic) _Bool hasSequenceNumber; // @dynamic hasSequenceNumber;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) VLKMediaFileDeletionLogicRequest *mediaFileDeletionLogicRequest; // @dynamic mediaFileDeletionLogicRequest;
@property(retain, nonatomic) VLKMediaFileTransferRequest *mediaFileTransferRequest; // @dynamic mediaFileTransferRequest;
@property(nonatomic) int sequenceNumber; // @dynamic sequenceNumber;
@property(nonatomic) int type; // @dynamic type;

@end

