//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIVisualEffectView.h"

#import "SCComposerContentViewProviding.h"

@class NSString;

@interface SCComposerBlurView : UIVisualEffectView <SCComposerContentViewProviding>
{
}

+ (void)bindAttributes:(id)arg1;
- (_Bool)_setStyle:(long long)arg1 animator:(id)arg2;
- (_Bool)willEnqueueIntoComposerPool;
- (_Bool)requiresShapeLayerForBorderRadius;
- (id)contentViewForInsertingComposerChildren;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
