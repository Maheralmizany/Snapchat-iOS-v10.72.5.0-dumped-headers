//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLazy;

@interface SCGalleryOnDemandResources : NSObject
{
    SCLazy *_contentDelivery;
}

- (void).cxx_destruct;
- (void)_requestOnDemandResourceForType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearOnDemandResourceForType:(unsigned long long)arg1;
- (void)requestOnDemandResourceForType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
