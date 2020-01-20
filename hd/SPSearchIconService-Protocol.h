//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, SPHairStyleModel, SPScenariosTopic;

@protocol SPSearchIconService <NSObject>
- (id <SPCancellationToken>)searchIconForPersonProcessor:(id <SPPersonProcessor>)arg1 topic:(SPScenariosTopic *)arg2 hairStyleModel:(SPHairStyleModel *)arg3 size:(struct CGSize)arg4 callbackQueue:(NSObject<OS_dispatch_queue> *)arg5 completion:(void (^)(UIImage *, NSError *))arg6;
@end

