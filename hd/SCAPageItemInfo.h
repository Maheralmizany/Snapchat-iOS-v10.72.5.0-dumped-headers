//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAMapSerializable.h"

@interface SCAPageItemInfo : SCAMapSerializable
{
}

- (void)setSectionUpdateId:(long long)arg1;
- (void)setSectionLayout:(long long)arg1;
- (void)setItemTypeSpecific:(id)arg1;
- (void)setItemType:(long long)arg1;
- (void)setItemPos:(long long)arg1;
- (void)setItemId:(id)arg1;
- (void)setItemAppearance:(id)arg1;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

