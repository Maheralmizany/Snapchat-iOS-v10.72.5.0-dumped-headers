//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLensExplorerImpressionInfoValue.h"

#import "SCImpressionInfo.h"

@class NSString;

@interface SCLensExplorerImpressionInfo : SCLensExplorerImpressionInfoValue <SCImpressionInfo>
{
}

- (id)withItemPosition:(unsigned int)arg1;
- (id)withLastUpdateDate:(id)arg1;
- (id)updateWithDate:(id)arg1 viewDuration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

