//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface URLPriorityConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *postfixURL; // @dynamic postfixURL;
@property(copy, nonatomic) NSString *prefixURL; // @dynamic prefixURL;
@property(nonatomic) int priority; // @dynamic priority;
@property(copy, nonatomic) NSString *regexURL; // @dynamic regexURL;

@end

