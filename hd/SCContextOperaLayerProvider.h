//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCContextOperaLayerProviding.h"

@class NSString;

@interface SCContextOperaLayerProvider : NSObject <SCContextOperaLayerProviding>
{
}

- (id)createLayerWithProperties:(id)arg1 page:(id)arg2;
- (id)createLayerViewControllerWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

