//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "SuperKVO.h"

@class NSString;

@interface AIFKVOUILabel : UILabel <SuperKVO>
{
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)mvvm_unobserveAll;
- (void)mvvm_unobserveBlock:(id)arg1;
- (void)mvvm_unobserveLast:(id)arg1;
- (void)mvvm_unobserve:(id)arg1;
- (id)mvvm_observeCollection:(id)arg1 options:(unsigned long long)arg2 with:(CDUnknownBlockType)arg3;
- (id)mvvm_observeCollection:(id)arg1 with:(CDUnknownBlockType)arg2;
- (id)mvvm_observe:(id)arg1 options:(unsigned long long)arg2 with:(CDUnknownBlockType)arg3;
- (id)mvvm_observe:(id)arg1 with:(CDUnknownBlockType)arg2;
- (struct NSMutableDictionary *)kvoCollectionBlocksByKeyPath;
- (struct NSMutableDictionary *)kvoBlocksByKeyPath;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

