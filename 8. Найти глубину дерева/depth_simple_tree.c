int depth(node *tree)
{
    if (tree == NULL) {
        return 0;
    }
    else {
        int chi = depth(tree->child);
        int sib = depth(tree->sibling) - 1;
        return (chi > sib) ? (chi + 1) : (sib + 1);
    }
}
