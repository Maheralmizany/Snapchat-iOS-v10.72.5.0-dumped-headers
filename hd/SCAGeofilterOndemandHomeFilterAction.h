//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAGeofilterOndemandEventBase.h"

@interface SCAGeofilterOndemandHomeFilterAction : SCAGeofilterOndemandEventBase
{
}

- (void)setTemplateId:(id)arg1;
- (void)setSubmitError:(id)arg1;
- (void)setHomeFilterVisible:(_Bool)arg1;
- (void)setHomeFilterPrivacySetting:(long long)arg1;
- (void)setHasSticker:(_Bool)arg1;
- (void)setHasCaption:(_Bool)arg1;
- (void)setActionType:(long long)arg1;
- (void)setActionSucceed:(_Bool)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
