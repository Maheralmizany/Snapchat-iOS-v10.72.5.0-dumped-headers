//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (Draggable)
- (void)enableDragging;
- (void)disableDragging;
- (void)adjustAnchorPointForGestureRecognizer:(id)arg1;
- (void)handleDrag:(id)arg1;
- (CDUnknownBlockType)draggingEndedBlock;
- (void)setDraggingEndedBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)draggingMovedBlock;
- (void)setDraggingMovedBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)draggingStartedBlock;
- (void)setDraggingStartedBlock:(CDUnknownBlockType)arg1;
- (struct CGRect)handle;
- (void)setHandle:(struct CGRect)arg1;
- (_Bool)cancelsTouchesInView;
- (void)setCancelsTouchesInView:(_Bool)arg1;
- (id)dragGestureRecognizer;
- (void)setDragGestureRecognizer:(id)arg1;
@end

