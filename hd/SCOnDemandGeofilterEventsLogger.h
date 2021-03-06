//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCOnDemandGeofilterEventsManager, SCOnDemandGeofilterLineItemEvent;

@interface SCOnDemandGeofilterEventsLogger : NSObject
{
    double _startTimeStampOnCurrentPage;
    SCOnDemandGeofilterEventsManager *_eventManager;
    SCOnDemandGeofilterLineItemEvent *_lineItemEvent;
}

@property(retain, nonatomic) SCOnDemandGeofilterLineItemEvent *lineItemEvent; // @synthesize lineItemEvent=_lineItemEvent;
- (void).cxx_destruct;
- (void)trackODGEvent:(id)arg1;
- (void)fireAbandonmentSurveyResponseEventWithSurveyResponseKey:(id)arg1;
- (void)fireAutoReviewEventWithPreRenderingAssetStructureId:(id)arg1 withAutoApprovalStatus:(id)arg2 withAutoRejectionCode:(id)arg3 withAutoUndecidedCode:(id)arg4 withUserCanMakePayments:(_Bool)arg5;
- (void)fireDeeplinkEventWithCampaign:(id)arg1 withSource:(id)arg2 withMedium:(id)arg3 withContent:(id)arg4;
- (void)firePageViewEventWithNextPage:(long long)arg1 withExitEvent:(long long)arg2 pendingCollection:(_Bool)arg3 forLineItemId:(id)arg4;
- (void)firePageViewEventWithNextPage:(long long)arg1 withExitEvent:(long long)arg2;
- (void)openPageView:(long long)arg1;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)registerLineItemEventForDataController:(id)arg1;
@property(readonly, nonatomic) NSString *sessionId;
- (id)initWithEventManager:(id)arg1;

@end

