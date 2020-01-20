//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSAttributedString;

@interface SCChatTimestampViewModel : NSObject <NSCopying>
{
    NSAttributedString *_cellTimestampText;
    NSAttributedString *_actionHeaderTimestampText;
}

@property(readonly, copy, nonatomic) NSAttributedString *actionHeaderTimestampText; // @synthesize actionHeaderTimestampText=_actionHeaderTimestampText;
@property(readonly, copy, nonatomic) NSAttributedString *cellTimestampText; // @synthesize cellTimestampText=_cellTimestampText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCellTimestampText:(id)arg1 actionHeaderTimestampText:(id)arg2;

@end
