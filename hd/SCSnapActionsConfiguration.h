//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCSnapActionsConfiguration : NSObject <NSCopying>
{
    _Bool _isShareable;
    _Bool _isReportable;
}

@property(readonly, nonatomic) _Bool isReportable; // @synthesize isReportable=_isReportable;
@property(readonly, nonatomic) _Bool isShareable; // @synthesize isShareable=_isShareable;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsShareable:(_Bool)arg1 isReportable:(_Bool)arg2;

@end

