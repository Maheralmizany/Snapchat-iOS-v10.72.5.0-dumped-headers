//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSABaseComponent.h"

@interface LSAOfflineDepthComponent : LSABaseComponent
{
    struct shared_ptr<LSAOfflineDepthDataProviderWrapper> _depthDataProviderWrapper;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) id <LSAOfflineDepthDataProviderProtocol> dataProvider;
- (void)setCoreManager:(shared_ptr_6e078de4)arg1 announcer:(id)arg2 configuration:(id)arg3;

@end
