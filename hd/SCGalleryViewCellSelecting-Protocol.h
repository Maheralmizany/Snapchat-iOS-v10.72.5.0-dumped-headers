//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, UIImage;

@protocol SCGalleryViewCellSelecting <NSObject>
- (unsigned long long)interactionMode;
- (void)animateLongTapForTouchLocation:(struct CGPoint)arg1 reverse:(_Bool)arg2;
- (void)setSelectMode:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 selectOverlayImage:(UIImage *)arg2 snapIds:(NSSet *)arg3;
- (void)setSelected:(_Bool)arg1;

@optional
- (_Bool)canSelectAtPoint:(struct CGPoint)arg1;
@end
