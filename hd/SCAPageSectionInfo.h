//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAMapSerializable.h"

@interface SCAPageSectionInfo : SCAMapSerializable
{
}

- (void)setSectionTypeSpecific:(id)arg1;
- (void)setSectionType:(long long)arg1;
- (void)setSectionPos:(long long)arg1;
- (void)setSectionId:(id)arg1;
- (void)setPageUpdateId:(long long)arg1;
- (void)setPageLayout:(long long)arg1;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
