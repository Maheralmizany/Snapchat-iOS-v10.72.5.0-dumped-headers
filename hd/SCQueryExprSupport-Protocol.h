//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCQueryExprSupport <NSObject>
- (long long)compare:(id <SCQueryExprSupport>)arg1;
- (_Bool)compare:(id <SCQueryExprSupport>)arg1 withExpr:(int)arg2;
- (void)bindQueryStatement:(struct sqlite3_stmt *)arg1 atPosition:(int)arg2;
@end

