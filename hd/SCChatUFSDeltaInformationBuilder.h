//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface SCChatUFSDeltaInformationBuilder : NSObject
{
    NSDictionary *_groupDeltas;
    NSDictionary *_oneOnOneChatDeltas;
    NSDictionary *_oneOnOneSnapDeltas;
}

+ (id)withChatUFSDeltaInformation:(id)arg1;
- (void).cxx_destruct;
- (id)setOneOnOneSnapDeltas:(id)arg1;
- (id)setOneOnOneChatDeltas:(id)arg1;
- (id)setGroupDeltas:(id)arg1;
- (id)build;

@end

