@import UIKit;

typedef void (^InitCallbackBlock)(void);

@interface MZPersistenceManager : NSObject

@property (strong, nonatomic, readonly) NSManagedObjectContext *managedObjectContext;

- (id)initWithCallback:(InitCallbackBlock) callback;

- (void)save;

@end
