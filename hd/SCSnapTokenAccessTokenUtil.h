//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCSnapTokenAccessTokenUtil : NSObject
{
}

+ (long long)_getEarlyPrefetchSecs:(id)arg1;
+ (long long)_getEarlyExpiresSecs:(id)arg1;
+ (struct NSDictionary *)getAppTokensWithNetworkTokens:(struct NSArray *)arg1 prefetchHint:(id)arg2 userId:(id)arg3;

@end
