//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTV3TooltipServices.h"

@class NSMutableDictionary, NSString, SCExperimentManager, SCUserToolTipStatus;

@interface SCTV3TooltipServices : NSObject <SCTV3TooltipServices>
{
    SCUserToolTipStatus *_tooltipStatus;
    SCExperimentManager *_experimentManager;
    NSMutableDictionary *_tooltipViews;
    _Bool _syncScheduled;
    id <SCTV3TooltipServicesDelegate> _delegate;
}

@property(nonatomic) __weak id <SCTV3TooltipServicesDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_synchronizeTooltipStatus;
- (void)_markTooltipHasShown:(unsigned long long)arg1;
- (_Bool)_shouldShowTooltip:(unsigned long long)arg1;
- (void)resetAllTooltips;
- (void)hideTooltip:(unsigned long long)arg1 forever:(_Bool)arg2;
- (void)showTooltip:(unsigned long long)arg1;
- (_Bool)isTooltipVisible:(unsigned long long)arg1;
- (id)initWithExperimentManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

