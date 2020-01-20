//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSABaseComponent.h"

@class LSADrawingComponentListenerAnnouncer, LSAEmojiProvider;

@interface LSADrawingComponent : LSABaseComponent
{
    LSADrawingComponentListenerAnnouncer *_drawingComponentAnnouncer;
    LSAEmojiProvider *_emojiProvider;
}

- (void).cxx_destruct;
- (void)_ensureEmojiProviderSet;
- (void)clearResources;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)getDrawingOverlayForEffectId:(id)arg1 resolution:(struct CGSize)arg2 scale:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)undoStrokeWithCompletion:(CDUnknownBlockType)arg1;
- (void)setEmojiString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setStrokeWidth:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setStrokeColor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)selectBrushWithAssetId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDrawingData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
