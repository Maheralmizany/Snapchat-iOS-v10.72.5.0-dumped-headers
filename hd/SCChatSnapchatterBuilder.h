//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SOJUFriend;

@interface SCChatSnapchatterBuilder : NSObject
{
    SOJUFriend *_sojuSnapchatter;
    long long _loadState;
}

+ (id)withChatSnapchatter:(id)arg1;
- (void).cxx_destruct;
- (id)setLoadState:(long long)arg1;
- (id)setSojuSnapchatter:(id)arg1;
- (id)build;

@end

