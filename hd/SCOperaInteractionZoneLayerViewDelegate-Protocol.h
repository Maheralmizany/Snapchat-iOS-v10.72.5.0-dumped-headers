//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCActionModel, SCOperaInteractionZoneLayerView;

@protocol SCOperaInteractionZoneLayerViewDelegate <NSObject>
- (void)didTapInteractionZoneTitleInLayerView:(SCOperaInteractionZoneLayerView *)arg1;
- (void)layerView:(SCOperaInteractionZoneLayerView *)arg1 scrolledItemIndexPath:(NSArray *)arg2 endItemActionModel:(SCActionModel *)arg3;
- (void)layerViewDidStartScrolling:(SCOperaInteractionZoneLayerView *)arg1;
- (void)layerView:(SCOperaInteractionZoneLayerView *)arg1 didTriggerActionWithActionModel:(SCActionModel *)arg2 tapLocation:(struct CGPoint)arg3 itemIndex:(long long)arg4;
@end

