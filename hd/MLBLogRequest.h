//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLBLogFileTransferRequest;

@interface MLBLogRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLogFileTransferRequest; // @dynamic hasLogFileTransferRequest;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) MLBLogFileTransferRequest *logFileTransferRequest; // @dynamic logFileTransferRequest;
@property(nonatomic) int type; // @dynamic type;

@end

