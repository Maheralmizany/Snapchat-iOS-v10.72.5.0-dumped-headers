//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCChatMessageSavedStateBuilder : NSObject
{
    _Bool _saved;
    unsigned long long _version;
}

+ (id)withChatMessageSavedState:(id)arg1;
- (id)setVersion:(unsigned long long)arg1;
- (id)setSaved:(_Bool)arg1;
- (id)build;

@end

