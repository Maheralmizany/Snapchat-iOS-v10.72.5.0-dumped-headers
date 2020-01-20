//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUSignedPayload;

@interface SOJUHeaderBuilder : NSObject
{
    NSString *_from;
    NSArray *_to;
    NSString *_convId;
    NSNumber *_isv3;
    SOJUSignedPayload *_auth;
    NSNumber *_connSeqNum;
}

+ (id)withJUHeader:(id)arg1;
- (void).cxx_destruct;
- (id)setConnSeqNum:(id)arg1;
- (id)setAuth:(id)arg1;
- (id)setIsv3:(id)arg1;
- (id)setConvId:(id)arg1;
- (id)setTo:(id)arg1;
- (id)setFrom:(id)arg1;
- (id)build;
- (id)setConnSeqNumValue:(long long)arg1;
- (id)setIsv3Value:(_Bool)arg1;

@end

