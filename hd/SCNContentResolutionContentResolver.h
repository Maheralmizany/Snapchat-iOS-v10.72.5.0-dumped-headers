//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCNContentResolutionContentResolver : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::content_resolution::ContentResolver>, std::__1::shared_ptr<snap::content_resolution::ContentResolver>> _cppRefHandle;
}

+ (id)createWithDependencies:(id)arg1 rankedMediaVariantsProvider:(id)arg2 metricsProcessor:(id)arg3 blizzardLogger:(id)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateNetworkMapping:(id)arg1;
- (id)resolveSerializedContentObject:(id)arg1 mediaId:(id)arg2;
- (id)resolveUrl:(id)arg1 mediaId:(id)arg2;
- (id)initWithCpp:(const shared_ptr_9ebbd4c1 *)arg1;

@end

