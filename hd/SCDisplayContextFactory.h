//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCDisplayContextFactory : NSObject
{
}

+ (void)setIsUserBlocking:(_Bool)arg1 forDisplayContext:(id)arg2;
+ (id)removeContext:(id)arg1 fromDisplayContext:(id)arg2;
+ (id)appendContexts:(id)arg1 toDisplayContext:(id)arg2;
+ (id)appendContext:(id)arg1 toDisplayContext:(id)arg2;
+ (id)displayContextWithContexts:(id)arg1;
+ (id)rootContextForPageType:(long long)arg1;

@end

