//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCWAWebAttachmentResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int queryId; // @dynamic queryId;
@property(retain, nonatomic) NSMutableArray *queryResultsArray; // @dynamic queryResultsArray;
@property(readonly, nonatomic) unsigned long long queryResultsArray_Count; // @dynamic queryResultsArray_Count;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

