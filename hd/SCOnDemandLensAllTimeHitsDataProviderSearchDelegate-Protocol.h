//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SCOnDemandLensAllTimeHitsDataProvider;

@protocol SCOnDemandLensAllTimeHitsDataProviderSearchDelegate <NSObject>
- (void)allTimeHitsDataProvider:(SCOnDemandLensAllTimeHitsDataProvider *)arg1 didFetchObjects:(NSArray *)arg2 forQuery:(NSString *)arg3 offset:(unsigned long long)arg4 count:(unsigned long long)arg5 hasMore:(_Bool)arg6;
@end

